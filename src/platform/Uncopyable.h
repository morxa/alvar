/*
 * This file is part of ALVAR, A Library for Virtual and Augmented Reality.
 *
 * Copyright 2007-2012 VTT Technical Research Centre of Finland
 *
 * Contact: VTT Augmented Reality Team <alvar.info@vtt.fi>
 *          <http://www.vtt.fi/multimedia/alvar.html>
 *
 * ALVAR is free software; you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with ALVAR; if not, see
 * <http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html>.
 */

#ifndef UNCOPYABLE_H
#define UNCOPYABLE_H

/**
 * \file Uncopyable.h
 *
 * \brief This file implements an uncopyable interface.
 */

#include "Alvar.h"

namespace alvar {

/**
 * \brief Uncopyable for preventing object copies.
 *
 * Uncopyable class for preventing the inheriting class to be copied. The
 * inheriting class must use private inheritance.
 */
class ALVAR_EXPORT Uncopyable
{
protected:
	/**
     * \brief Constructor.
     */
	Uncopyable()
	{
	}

	/**
     * \brief Destructor.
     */
	~Uncopyable()
	{
	}

private:
	/**
     * \brief Copy constructor.
     */
	Uncopyable(const Uncopyable &uncopyable);

	/**
     * \brief Assignment operator.
     */
	Uncopyable &operator=(const Uncopyable &uncopyable);
};

} // namespace alvar

#endif
