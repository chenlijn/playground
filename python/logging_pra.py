
import logging
from log_pra2 import log_example

if __name__=="__main__":
    logging.basicConfig(filename="example.log", level=logging.DEBUG) 

    logger = logging.getLogger(__name__)
    logger.warning("warning")
    logger.info("hello there")

    log_example()


