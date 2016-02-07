// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� FOXINPUT_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// FOXINPUT_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef FOXINPUT_EXPORTS
#define FOXINPUT_API __declspec(dllexport)
#else
#define FOXINPUT_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

    double FOXINPUT_API FI_Init(double hwnd);
    double FOXINPUT_API FI_Init_GMS(HWND hwnd);
    double FOXINPUT_API FI_Release();
    double FOXINPUT_API FI_EnableIME(double enable);
    double FOXINPUT_API FI_SetIMEPosition(double x, double y);

#ifdef __cplusplus
}
#endif

bool InstallWndProc();
bool UninstallWndProc();
