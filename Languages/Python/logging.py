import logging


class CustomFormatter(logging.Formatter):
    """Logging Formatter to add colors and count warning / errors"""

    bold_grey = "\x1b[36;1m"
    bold_yellow = "\x1b[33;1m"
    yellow = "\x1b[33;20m"
    red = "\x1b[31;21m"
    bold_red = "\x1b[31;1m"
    bold_green = "\x1b[32;1m"
    reset = "\x1b[0m"
    _format = bold_green + "[%(asctime)s]" + reset + yellow + " %(name)s (%(funcName)s)" + reset 
    level_format = " %(levelname)s: \n"
    message_format = "%(message)s"

    FORMATS = {
        logging.DEBUG: _format + bold_grey + level_format + reset + message_format,
        logging.INFO: _format + bold_green + level_format + reset + message_format,
        logging.WARNING: _format + bold_yellow + level_format + message_format + reset,
        logging.ERROR: _format + bold_red + level_format + message_format + reset,
        logging.CRITICAL:  _format + bold_red + level_format + message_format + reset
    }

    def format(self, record):
        log_fmt = self.FORMATS.get(record.levelno)
        formatter = logging.Formatter(log_fmt)
        return formatter.format(record)

# TODO write log into file
# create logger with 'spam_application'
logger = logging.getLogger("someLogger")
logger.setLevel(logging.INFO)

# create console handler with a higher log level
ch = logging.StreamHandler()
ch.setLevel(logging.DEBUG)

ch.setFormatter(CustomFormatter())

logger.addHandler(ch)

# logger.debug("set Logger")

# logging.basicConfig(format='[%(asctime)s] - %(name)s [%(funcName)s] - %(levelname)s: %(message)s', level=logging.DEBUG)