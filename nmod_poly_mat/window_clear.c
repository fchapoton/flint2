/*
    Copyright (C) 2015 Elena Sergeicheva

    This file is part of FLINT.

    FLINT is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "nmod_poly_mat.h"

void
nmod_poly_mat_window_clear(nmod_poly_mat_t window)
{
    if (window->entries)
    {
        flint_free(window->rows);
    }

}
