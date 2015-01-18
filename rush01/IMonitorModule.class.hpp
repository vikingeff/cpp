/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 18:22:05 by gleger            #+#    #+#             */
/*   Updated: 2015/01/18 11:37:07 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class IMonitorModule
{
public:
	virtual	void		displayModule()=0;
	virtual ~IMonitorModule();
};
