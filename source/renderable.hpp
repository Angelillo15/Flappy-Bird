#ifndef renderable_hpp
#define renderable_hpp

class renderable
{
private:
  /* data */
public:
  renderable();
  ~renderable();
  virtual void render() = 0;
};

renderable::renderable()
{
}

renderable::~renderable()
{
}

#endif // !renderable_hpp