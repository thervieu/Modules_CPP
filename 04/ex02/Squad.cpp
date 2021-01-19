#include "Squad.hpp"

Squad::Squad(void)
{
    _nbr_units = 0;
    _squad = NULL;
    return ;
}

Squad::Squad(const Squad &src)
{
    _copyUnits(src);
    _nbr_units = src._nbr_units;
    return ;
}

Squad::~Squad(void)
{
    _destroyUnits();
    return ;
}

Squad	&Squad::operator= (const Squad &rhs)
{
    if (this != &rhs)
    {
        _destroyUnits();
        _copyUnits(rhs);
        _nbr_units = rhs._nbr_units;
    }
    return (*this);
}

int		Squad::push(ISpaceMarine *marine)
{
    t_container  *tmp;

    tmp = _squad;
    if (marine != NULL && _unitAlreadyIn(marine, tmp) == false)
    {
        tmp = _squad;
        if (_squad != NULL)
        {
            while (tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = new t_container;
            tmp->next->unit = marine;
            tmp->next->next = NULL;
        }
        else
        {
            _squad = new t_container;
            _squad->unit = marine;
            _squad->next = NULL;
        }
        _nbr_units += 1;
    }
    return (_nbr_units);
}


int		Squad::getCount(void) const
{
    return (_nbr_units);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
    t_container  *tmp;

    tmp = _squad;
    if (n < 0 || n >= _nbr_units)
    {
        return (NULL);
    }
    while (n--)
    {
        tmp = tmp->next;
    }
    return (tmp->unit);
}

void	Squad::_copyUnits(const Squad &src)
{
    for (int i = 0; i < src.getCount(); i += 1)
    {
        push(src.getUnit(i));
    }
    return ;
}

void	Squad::_destroyUnits(void)
{
    t_container  *tmp;

    if (_squad != NULL)
    {
        delete _squad->unit;
        tmp = _squad;
        _squad = _squad->next;
        delete tmp;
        return (_destroyUnits());
    }
    return ;
}

bool	Squad::_unitAlreadyIn(ISpaceMarine *marine, t_container *squad)
{
    if (squad == NULL)
    {
        return (false);
    }
    else if (marine == squad->unit)
    {
        return (true);
    }
    else
    {
        return (_unitAlreadyIn(marine, squad->next));
    }
}