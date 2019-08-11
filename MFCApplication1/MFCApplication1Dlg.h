
// MFCApplication1Dlg.h: 헤더 파일
//

#pragma once

#define MAX_ITEM_COUNT	8

// CMFCApplication1Dlg 대화 상자
class CMFCApplication1Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplication1Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	CCheckListBox m_item_list;
public:
	afx_msg void OnEnChangeTotalPriceEdit();
	afx_msg void OnLbnSelchangeItemList();
	CListBox m_count_list;
	void CalcTotalPrice();
	void ChangeText(CListBox * ap_list_box, int a_index, const wchar_t *ap_string);

	CRect m_spin_rect;
	CSpinButtonCtrl m_count_spin;
	afx_msg void OnDeltaposCountSpin(NMHDR *pNMHDR, LRESULT *pResult);
};
