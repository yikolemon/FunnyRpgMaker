/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d7e9c */

LRESULT FUN_1400d7e9c(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  byte bVar1;
  HANDLE pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  LRESULT LVar6;
  
  pvVar2 = GetPropA(param_1,"IMGUI_CONTEXT");
  if (pvVar2 != (HANDLE)0x0) {
    uVar3 = FUN_14008120c(pvVar2);
    uVar4 = FUN_14008121e(pvVar2);
    lVar5 = FUN_1400d6d67(param_1,param_2,param_3,param_4,uVar3);
    if (lVar5 != 0) {
      return 1;
    }
    lVar5 = FUN_1400d8723(uVar4,param_1);
    if (lVar5 != 0) {
      if ((int)param_2 < 0x10) {
        if (param_2 == 3) {
          *(undefined1 *)(lVar5 + 0x71) = 1;
        }
        else if (param_2 == 5) {
          *(undefined1 *)(lVar5 + 0x72) = 1;
        }
      }
      else {
        if (param_2 == 0x84) {
          LVar6 = -1;
          bVar1 = *(byte *)(lVar5 + 4) & 0x80;
        }
        else {
          if (param_2 != 0x21) {
            if (param_2 == 0x10) {
              *(undefined1 *)(lVar5 + 0x73) = 1;
              return 0;
            }
            goto LAB_1400d7f72;
          }
          LVar6 = 3;
          bVar1 = *(byte *)(lVar5 + 4) & 0x40;
        }
        if (bVar1 != 0) {
          return LVar6;
        }
      }
    }
  }
LAB_1400d7f72:
                    /* WARNING: Could not recover jumptable at 0x0001400d7f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar6 = DefWindowProcW(param_1,param_2,param_3,param_4);
  return LVar6;
}

