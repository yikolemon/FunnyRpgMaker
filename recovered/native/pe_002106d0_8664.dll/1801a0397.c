/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a0397 */

bool FUN_1801a0397(uint *param_1,int param_2)

{
  uint uVar1;
  HCURSOR hCursor;
  LPCWSTR lpCursorName;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x20) == 0) {
    hCursor = (HCURSOR)0x0;
    if ((param_2 != -1) && ((char)param_1[0x17] == '\0')) {
      switch(param_2) {
      case 1:
        lpCursorName = (LPCWSTR)0x7f01;
        break;
      case 2:
        lpCursorName = (LPCWSTR)0x7f86;
        break;
      case 3:
        lpCursorName = (LPCWSTR)0x7f85;
        break;
      case 4:
        lpCursorName = (LPCWSTR)0x7f84;
        break;
      case 5:
        lpCursorName = (LPCWSTR)0x7f83;
        break;
      case 6:
        lpCursorName = (LPCWSTR)0x7f82;
        break;
      case 7:
        lpCursorName = (LPCWSTR)0x7f89;
        break;
      case 8:
        lpCursorName = (LPCWSTR)0x7f02;
        break;
      case 9:
        lpCursorName = (LPCWSTR)0x7f8a;
        break;
      case 10:
        lpCursorName = (LPCWSTR)0x7f88;
        break;
      default:
        lpCursorName = (LPCWSTR)0x7f00;
      }
      hCursor = LoadCursorW((HINSTANCE)0x0,lpCursorName);
    }
    SetCursor(hCursor);
  }
  return (uVar1 & 0x20) == 0;
}

