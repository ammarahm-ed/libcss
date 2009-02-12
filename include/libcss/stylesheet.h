/*
 * This file is part of LibCSS.
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2008 John-Mark Bell <jmb@netsurf-browser.org>
 */

#ifndef libcss_stylesheet_h_
#define libcss_stylesheet_h_

#include <libcss/errors.h>
#include <libcss/types.h>

/**
 * Type of stylesheet import handler
 */
typedef css_error (*css_import_handler)(void *pw, const char *url,
		css_stylesheet *sheet);

css_error css_stylesheet_create(css_language_level level,
		const char *charset, const char *url, const char *title,
		css_origin origin, uint64_t media,
		css_import_handler import_callback, void *import_pw,
		css_alloc alloc, void *alloc_pw, css_stylesheet **stylesheet);
css_error css_stylesheet_destroy(css_stylesheet *sheet);

css_error css_stylesheet_append_data(css_stylesheet *sheet,
		const uint8_t *data, size_t len);
css_error css_stylesheet_data_done(css_stylesheet *sheet);

css_error css_stylesheet_get_url(css_stylesheet *sheet, const char **url);
css_error css_stylesheet_get_title(css_stylesheet *sheet, const char **title);
css_error css_stylesheet_get_origin(css_stylesheet *sheet, css_origin *origin);
css_error css_stylesheet_get_media(css_stylesheet *sheet, uint64_t *media);

css_error css_stylesheet_get_disabled(css_stylesheet *sheet, bool *disabled);
css_error css_stylesheet_set_disabled(css_stylesheet *sheet, bool disabled);

#endif

