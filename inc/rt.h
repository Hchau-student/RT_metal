/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 13:17:11 by kcharla           #+#    #+#             */
/*   Updated: 2020/09/30 20:53:55 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H

# include "err.h"
# include "rt_s.h"
# include "fio.h"
# include "gui.h"
# include "rtc.h"

extern t_rt		*g_rt;
extern t_mlx	*g_mlx;

int		rt_loop(void *void_rt);
int		rt_init();

#endif
