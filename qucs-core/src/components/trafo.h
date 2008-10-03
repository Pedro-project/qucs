/*
 * trafo.h - trafo class definitions
 *
 * Copyright (C) 2003, 2004, 2008 Stefan Jahn <stefan@lkcc.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this package; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
 * Boston, MA 02110-1301, USA.  
 *
 * $Id: trafo.h,v 1.9 2008/10/03 14:49:49 ela Exp $
 *
 */

#ifndef __TRAFO_H__
#define __TRAFO_H__

class trafo : public circuit
{
 public:
  trafo ();
  void initSP (void);
  void initDC (void);
  void initAC (void);
  void initTR (void);

  CREATOR (trafo);
};

#endif /* __TRAFO_H__ */
