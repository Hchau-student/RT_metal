/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtc_scn.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <kcharla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:13:04 by kcharla           #+#    #+#             */
/*   Updated: 2020/10/13 05:09:22 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTC_SCN_H
# define RTC_SCN_H

# include "rtc_scn_obj.h"

typedef struct		s_fov
{
	float 			fov_x;
	float 			fov_y;
	float 			delta_x;
	float 			delta_y;
	t_vec3			cam_dir;
}					t_fov;

struct				s_cam
{
	int				id;
	t_vec3			pos;
	t_vec3			forward;
	t_vec3			right;
	t_vec3			up;
	struct s_fov	fov;
};

typedef	struct		s_light
{
	int 			id;
	t_vec3			pos;
	t_vec3			col;
	float			power;
}					t_light;

#define RT_MAX_OBJECTS 128
#define RT_MAX_CAMERAS 16
#define RT_MAX_LIGHTS 16
#define RT_MAX_MATERIALS 32

/*
** objects_max and cameras_max values are
** needed for GPU to know size of arrays
** TODO defines are not enough?
*/

typedef struct		s_scn
{
	int				id;
	struct s_obj	objects[RT_MAX_OBJECTS];
	int				objects_num;
	struct s_cam	cameras[RT_MAX_CAMERAS];
	int				camera_active;
	int				cameras_num;
	struct s_mat	materials[RT_MAX_MATERIALS];
	int				materials_num;
	struct s_light	lights[RT_MAX_LIGHTS];
	int 			light_num;
}					t_scn;


#endif
