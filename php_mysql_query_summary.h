#ifndef PHP_MYSQL_QUERY_SUMMARY_H
#define PHP_MYSQL_QUERY_SUMMARY_H

#include "php.h"
#include "php_globals.h"
#include "ext/standard/info.h"
#include "ext/standard/php_string.h"

struct php_mysql_query_summary {
  char *query_string;    /* pointer to the query string */
  int runtime;          /* runtime in hundreds of seconds */
};

#endif /* PHP_MYSQL_QUERY_SUMMARY_H */
