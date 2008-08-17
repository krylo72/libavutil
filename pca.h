/*
 * Principal component analysis
 * Copyright (c) 2004 Michael Niedermayer <michaelni@gmx.at>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/**
 * @file pca.h
 * Principal component analysis
 */

#ifndef FFMPEG_PCA_H
#define FFMPEG_PCA_H

struct PCA *ff_pca_init(int n);
void ff_pca_free(struct PCA *pca);
void ff_pca_add(struct PCA *pca, double *v);
int ff_pca(struct PCA *pca, double *eigenvector, double *eigenvalue);

#endif /* FFMPEG_PCA_H */
