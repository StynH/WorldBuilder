#include "Face.h"

Face::Face(Texture t_texture, SpacialPoint t_x, SpacialPoint t_y, SpacialPoint t_z) : m_texture(t_texture), m_x(t_x), m_y(t_y), m_z(t_z)
{
	m_rotation = DEFAULT_ROTATION;
	m_lightmapscale = DEFAULT_LIGHTMAPSCALE;
	m_smoothinggroups = DEFAULT_SMOOTHINGROUPS;
}

void Face::setTexture(Texture t_texture)
{
	m_texture = t_texture;
}

void Face::setUAxis(int t_x, int t_y, int t_z, int t_v)
{
	m_uaxis[0] = t_x;
	m_uaxis[1] = t_y;
	m_uaxis[2] = t_z;
	m_uaxis[3] = t_v;
}

void Face::setVAxis(int t_x, int t_y, int t_z, int t_v)
{
	m_vaxis[0] = t_x;
	m_vaxis[1] = t_y;
	m_vaxis[2] = t_z;
	m_vaxis[3] = t_v;
}

