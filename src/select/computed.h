/*
 * This file is part of LibCSS
 * Licensed under the MIT License,
 *                http://www.opensource.org/licenses/mit-license.php
 * Copyright 2009 John-Mark Bell <jmb@netsurf-browser.org>
 */

#ifndef css_select_computed_h_
#define css_select_computed_h_

#include <libcss/computed.h>
#include <libcss/hint.h>
#include <libcss/unit.h>

#include "autogenerated_computed.h"

/**
 * Take a new reference to a computed style
 *
 * \param style  The style to take a new reference to.
 * \return The new computed style reference
 */
static inline css_computed_style * css__computed_style_ref(
		css_computed_style *style)
{
	if (style == NULL)
		return NULL;

	style->count++;
	return style;
}

css_error css__computed_style_create(css_computed_style **result);

css_error css__computed_style_initialise(css_computed_style *style,
		struct css_select_handler *handler, void *pw);

css_error css__compute_absolute_values(const css_computed_style *parent,
		css_computed_style *style,
		const css_unit_ctx *unit_ctx);

#endif
