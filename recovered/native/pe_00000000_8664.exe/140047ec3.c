/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140047ec3 */

void FUN_140047ec3(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  HRESULT HVar1;
  HRESULT HVar2;
  int iVar3;
  undefined1 auStackY_68 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStackY_68;
  HVar1 = CoInitializeEx((LPVOID)0x0,2);
  if (HVar1 != -0x7ffefefa && HVar1 < 0) goto LAB_140048009;
  local_38 = (longlong *)0x0;
  HVar2 = CoCreateInstance((IID *)&DAT_140e61ef0,(LPUNKNOWN)0x0,1,(IID *)&DAT_140e61ed0,&local_38);
  if (-1 < HVar2) {
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    iVar3 = (**(code **)(*local_38 + 0xa0))(local_38,param_2);
    if (-1 < iVar3) {
      if (param_3[2] != 0) {
        if (7 < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        iVar3 = (**(code **)(*local_38 + 0x58))(local_38,param_3);
        if (iVar3 < 0) goto LAB_140047ff4;
      }
      if (7 < (ulonglong)param_4[3]) {
        param_4 = (undefined8 *)*param_4;
      }
      iVar3 = (**(code **)(*local_38 + 0x88))(local_38,param_4,0);
      if (-1 < iVar3) {
        iVar3 = (**(code **)*local_38)(local_38,&DAT_140e61f10);
        if (-1 < iVar3) {
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          (**(code **)(lRam0000000000000000 + 0x30))(0,param_1,1);
          (**(code **)(lRam0000000000000000 + 0x10))();
        }
      }
    }
LAB_140047ff4:
    (**(code **)(*local_38 + 0x10))();
  }
  if (-1 < HVar1) {
    CoUninitialize();
  }
LAB_140048009:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStackY_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStackY_68);
}

