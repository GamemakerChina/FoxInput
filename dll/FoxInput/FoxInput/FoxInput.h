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
extern "C"
{
#endif

    double FOXINPUT_API FI_Init(double hwnd);
    double FOXINPUT_API FI_Init_GMS(HWND hwnd);
    double FOXINPUT_API FI_Release();

    // ���á��������뷨��
    // �����뷨������ʱ���������뷨��������Ч
    // �������û�����ļ���
    // ͬʱ��ʱ�κ����뷨��ֻ������Ӣ��
    double FOXINPUT_API FI_EnableIME(double enable);
    // ����ϵͳ���뷨����λ�ã����ڷ���������ģʽ����Ч
    double FOXINPUT_API FI_SetIMEPosition(double x, double y);

    // ���롢�˳���������ģʽ
    // ����������ģʽ�½�������ʾϵͳ�Դ����뷨����
    // �����л�ȡ���뷨״̬�ĺ���������Ч
    double FOXINPUT_API FI_EnterFullControlMode();
    double FOXINPUT_API FI_ExitFullControlMode();

    // ���ñ�����Ƿ���Ҫ��ȡ�û�����
    // ��������������ģʽʱ��ѡ��ǿ�ƿ���
    double FOXINPUT_API FI_GrabInputText(double enable);

    // ��ȡ�������뷨״̬
    double FOXINPUT_API FI_RefreshData();
    // ��ȡ���뷨ָʾ��
    LPCSTR FOXINPUT_API FI_GetIndicator();
    // ��ȡ�����������ַ��������������ڷ�����ģʽ����Ч��ֻҪ������ GrabInputText = true
    LPCSTR FOXINPUT_API FI_PopInputString();
    // ��ȡ��ѡ������
    double FOXINPUT_API FI_GetCandidateCount();
    // ��ȡ��ǰѡ���ĺ�ѡ������
    double FOXINPUT_API FI_GetCandidateSelection();
    // ��ȡָ�������ĺ�ѡ��
    LPCSTR FOXINPUT_API FI_GetCandidate(double index);
    // ��ȡ�û������Composition�ַ���
    LPCSTR FOXINPUT_API FI_GetCompositionString();
    // ��ȡ��ǰ���������ڵ��ַ���
    double FOXINPUT_API FI_GetCompositionCursorChars();

#ifdef __cplusplus
}
#endif

bool InstallWndProc();
bool UninstallWndProc();
