#ifndef _GRAPHIC_H_
#define _GRAPHIC_H_

#include "Moudle.h"
#include "Macros.h"
#include "util.h"

#include <lua.hpp>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL2_gfxPrimitives.h>

extern SDL_Renderer* renderer;

// ��������Ƿ���ʾ
// 1�������Ƿ���ʾ��boolean��
// 0����ֵ
ETHER_API setCursorShow(lua_State * L);

// ����ͼ���ļ�
// 1������ͼ���ļ�·����string��
// 1����ֵ���ɹ��򷵻�ͼ�����ݣ�userdata-IMAGE����ʧ���򷵻�nil
ETHER_API loadImage(lua_State * L);

// ���õ�ͼƬ�ļ��Ƿ�����ָ����ColorKey�����õ�Color����͸����
// 2������ͼ�����ݣ�userdata-IMAGE�����Ƿ����ã�boolean����ColorKey��table��
// 0����ֵ
ETHER_API setImageColorKey(lua_State * L);

// �ͷ��Ѽ��ص�ͼ��
// 1������ͼ�����ݣ�userdata-IMAGE��
// 0����ֵ
ETHER_API unloadImage(lua_State * L);

// ��ͼ�����ݴ������ڴ��ڵĿ���Ⱦ����
// 1������ͼ�����ݣ�userdata-IMAGE��
// 1����ֵ���������ݣ�userdata-TEXTURE��
ETHER_API createTexture(lua_State * L);

// ������������
// 1�������������ݣ�userdata-TEXTURE��
// 0����ֵ
ETHER_API destroyTexture(lua_State * L);

// ��������͸����
// 2�������������ݣ�userdata-TEXTURE����͸������ֵ��number��ȡֵ��Χ0-255��
// 0����ֵ
ETHER_API setTextureAlpha(lua_State * L);

// ��ȡ�Ѽ���ͼ��ߴ�
// 1������ͼ�����ݣ�userdata-IMAGE��
// 2����ֵ��ͼ����ȣ�number����ͼ��߶ȣ�number��
ETHER_API getImageSize(lua_State * L);

// ��������������Ⱦ��������
// 2�������������ݣ�userdata-TEXTURE��������������ʾ����ľ��Σ�table��
// 0����ֵ
ETHER_API copyTexture(lua_State * L);

// ����ת���������������Ⱦ��������
// 5�������������ݣ�userdata-TEXTURE������ת�Ƕȣ�number������ת�������꣨table������תģʽ��table��������������ʾ����ľ��Σ�table��
// 0����ֵ
ETHER_API copyRotateTexture(lua_State * L);

// ���ü����������������Ⱦ��������
// 3�������������ݣ�userdata-TEXTURE�������������ü�����ľ��Σ�table��������������ʾ����ľ��Σ�table��
// 0����ֵ
ETHER_API copyReshapeTexture(lua_State * L);

// ����ת�Ҳü����������������Ⱦ��������
// 6�������������ݣ�userdata-TEXTURE������ת�Ƕȣ�number������ת�������꣨table������תģʽ��table�������������ü�����ľ��Σ�table��������������ʾ����ľ��Σ�table��
// 0����ֵ
ETHER_API copyRotateReshapeTexture(lua_State * L);

// ���ô��ڻ�ͼ��ɫ
// 1������������ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
// 0����ֵ
ETHER_API setDrawColor(lua_State * L);

// ��ȡ���ڻ�ͼ��ɫ
// 0����
// 1����ֵ������������ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
ETHER_API getDrawColor(lua_State * L);

// ��ָ��λ�û��Ƶ�
// 1�����������꣨table��
// 0����ֵ
ETHER_API point(lua_State * L);

// ��ָ��λ�û���ֱ��
// 2������������꣨table�����յ����꣨table��
// 0����ֵ
ETHER_API singleline(lua_State * L);

// ��ָ��λ�û��ƴ�ֱ��
// 3������������꣨table�����յ����꣨table�����������ȣ�number��
// �޷���ֵ
ETHER_API thickLine(lua_State * L);

// ��ָ��λ�û�����������
// 1����������������ʾ����ľ��Σ�table��
// 0����ֵ
ETHER_API rectangle(lua_State * L);

// ��ָ��λ�û���������
// 1����������������ʾ����ľ��Σ�table��
// 0����ֵ
ETHER_API fillRectangle(lua_State * L);

// ��ָ��λ�û���Բ����������
// 2����������������ʾ����ľ��Σ�table����Բ�ǰ뾶��С��number��
// 0����ֵ
ETHER_API roundRectangle(lua_State * L);

// ��ָ��λ�û���Բ��������
// 2����������������ʾ����ľ��Σ�table����Բ�ǰ뾶��С��number��
// 0����ֵ
ETHER_API fillRoundRectangle(lua_State * L);

// ��ָ��λ�û��������Բ��
// 2������Բ�����꣨table����Բ�뾶��number��
// 0����ֵ
ETHER_API circle(lua_State * L);

// ��ָ��λ�û������Բ��
// 2������Բ�����꣨table����Բ�뾶��number��
// 0����ֵ
ETHER_API fillCircle(lua_State * L);

// ��ָ��λ�û����������Բ
// 3��������Բ�������꣨table������Բx��뾶��number������Բy��뾶��number��
// 0����ֵ
ETHER_API ellipse(lua_State * L);

// ��ָ��λ�û��������Բ
// 3��������Բ�������꣨table������Բx��뾶��number������Բy��뾶��number��
// 0����ֵ
ETHER_API fillEllipse(lua_State * L);

// ��ָ��λ�û������������
// 4��������������Բ��Բ�����꣨table������������Բ�İ뾶��number�������ο�ʼ�Ƕȣ�number�������ν����Ƕȣ�number�������δ���������Բ��Ϊԭ��Ķ�ά�ѿ�������ϵ��x��������ʼ���ƣ��Ƕȵ�������Ϊ˳ʱ�뷽��
// 0����ֵ
ETHER_API pie(lua_State * L);

// ��ָ��λ�û����������
// 4��������������Բ��Բ�����꣨table������������Բ�İ뾶��number�������ο�ʼ�Ƕȣ�number�������ν����Ƕȣ�number�������δ���������Բ��Ϊԭ��Ķ�ά�ѿ�������ϵ��x��������ʼ���ƣ��Ƕȵ�������Ϊ˳ʱ�뷽��
// 0����ֵ
ETHER_API fillPie(lua_State * L);

// ��ָ��λ�û��������������
// 6��������һ���������꣨table�����ڶ����������꣨table�����������������꣨table��
// 0����ֵ
ETHER_API triangle(lua_State * L);

// ��ָ��λ�û������������
// 6��������һ���������꣨table�����ڶ����������꣨table�����������������꣨table��
// 0����ֵ
ETHER_API fillTriangle(lua_State * L);

// ���������ļ�
// 2�����������ļ�·����string���������С��number��
// 1����ֵ���ɹ��򷵻��������ݣ�userdata-FONT����ʧ���򷵻�nil
ETHER_API loadFont(lua_State * L);

// �ͷ��Ѽ��ص�����
// 1�������������ݣ�userdata-FONT��
// 0����ֵ
ETHER_API unloadFont(lua_State * L);

// ��ȡ�Ѽ����������ʽ
// 1�������������ݣ�userdata-FONT��
// 1����ֵ����������������ʽ�ı���table��
ETHER_API getFontStyle(lua_State * L);

// �����Ѽ����������ʽ
// 2�������������ݣ�userdata-FONT������������������ʽ�ı���table��
// 0����ֵ
ETHER_API setFontStyle(lua_State * L);

// ��ȡ�Ѽ�������������߿���
// 1�������������ݣ�userdata-FONT��
// 1����ֵ�������߿��ȣ�number��
ETHER_API getFontOutlineWidth(lua_State * L);

// �����Ѽ�������������߿���
// 2�������������ݣ�userdata-FONT���������߿��ȣ�number��
// 0����ֵ
ETHER_API setFontOutlineWidth(lua_State * L);

// ��ȡ������
// 1�������������ݣ�userdata-FONT��
// 1����ֵ�������ࣨnumber��
ETHER_API getFontKerning(lua_State * L);

// ����������
// 2�������������ݣ�userdata-FONT���������ࣨnumber��
// 0����ֵ
ETHER_API setFontKerning(lua_State * L);

// ��ȡ����߶�
// 1�������������ݣ�userdata-FONT��
// 1����ֵ������߶ȣ�number��
ETHER_API getFontHeight(lua_State * L);

// ��ȡ�ı��ߴ�
// 2�������������ݣ�userdata-FONT�����ı����ݣ�string��
// 2����ֵ���ı����ȣ�number�����ı��߶ȣ�number��
ETHER_API getTextSize(lua_State * L);

// ��ȡUTF-8�����ʽ���ı��ߴ�
// 2�������������ݣ�userdata-FONT����UTF-8�����ʽ���ı����ݣ�string��
// 2�������ı����ȣ�number�����ı��߶ȣ�number��
ETHER_API getUTF8TextSize(lua_State * L);

// ʹ��Solidģʽ�����ı�ͼ��
// 3�������������ݣ�userdata-FONT�����ı����ݣ�string�������������ı���ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
// 1����ֵ���ɹ��򷵻�ͼ�����ݣ�userdata-IMAGE����ʧ���򷵻�nil
ETHER_API createTextImageSolid(lua_State * L);

// ʹ��Solidģʽ����UTF-8�����ʽ���ı�ͼ��
// 3�������������ݣ�userdata-FONT����UTF-8�����ʽ���ı����ݣ�string�������������ı���ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
// 1����ֵ���ɹ��򷵻�ͼ�����ݣ�userdata-IMAGE����ʧ���򷵻�nil
ETHER_API createUTF8TextImageSolid(lua_State * L);

// ʹ��Shadedģʽ�����ı�ͼ��
// 3�������������ݣ�userdata-FONT�����ı����ݣ�string�������������ı���ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255�������������ı�������ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
// 1����ֵ���ɹ��򷵻�ͼ�����ݣ�userdata-IMAGE����ʧ���򷵻�nil
ETHER_API createTextImageShaded(lua_State * L);

// ʹ��Shadedģʽ����UTF-8�����ʽ���ı�ͼ��
// 3�������������ݣ�userdata-FONT����UTF-8�����ʽ���ı����ݣ�string�������������ı���ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255�������������ı�������ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
// 1����ֵ���ɹ��򷵻�ͼ�����ݣ�userdata-IMAGE����ʧ���򷵻�nil
ETHER_API createUTF8TextImageShaded(lua_State * L);

// ʹ��Blendedģʽ�����ı�ͼ��
// 3�������������ݣ�userdata-FONT�����ı����ݣ�string�������������ı���ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
// 1����ֵ���ɹ��򷵻�ͼ�����ݣ�userdata-IMAGE����ʧ���򷵻�nil
ETHER_API createTextImageBlended(lua_State * L);

// ʹ��Blendedģʽ����UTF-8�����ʽ���ı�ͼ��
// 3�������������ݣ�userdata-FONT����UTF-8�����ʽ���ı����ݣ�string�������������ı���ɫ��RGBA����table��ȡֵ��Χ��Ϊ0-255��
// 1����ֵ���ɹ��򷵻�ͼ�����ݣ�userdata-IMAGE����ʧ���򷵻�nil
ETHER_API createUTF8TextImageBlended(lua_State * L);

// Unicode�ַ���תUTF8�ַ���
// 1������Unicode�ַ���
// 1����ֵ��UTF8�ַ���
ETHER_API unicodeToUTF8(lua_State* L);

class MoudleGraphic : public Moudle
{
public:
	MoudleGraphic(lua_State* L);
	~MoudleGraphic() {};

};

#endif // !_GRAPHIC_H_