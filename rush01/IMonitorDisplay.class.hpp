/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/17 18:22:14 by gleger            #+#    #+#             */
/*   Updated: 2015/01/18 11:35:57 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class IMonitorDisplay
{
	public:
		virtual	void		displayMonitor()=0;
		virtual ~IMonitorDisplay();

};
