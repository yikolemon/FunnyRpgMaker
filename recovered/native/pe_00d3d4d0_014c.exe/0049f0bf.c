/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049f0bf */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int __cdecl FUN_0049f0bf(uint param_1,WCHAR *param_2,uint param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_00521ec8 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_00521cc8)[(int)param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        FUN_0049d70b(param_1);
        iVar3 = -1;
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_00521cc8)[(int)param_1 >> 6]) & 1) == 0) {
          *(undefined1 *)(param_4 + 7) = 1;
          param_4[6] = 9;
          *(undefined1 *)(param_4 + 9) = 1;
          param_4[8] = 0;
        }
        else {
          iVar3 = FUN_0049eea3(param_1,param_2,param_3,param_4);
        }
        FUN_0049f1c8();
        ExceptionList = local_14;
        return iVar3;
      }
    }
    *(undefined1 *)(param_4 + 9) = 1;
    param_4[8] = 0;
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 9;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
  }
  ExceptionList = local_14;
  return -1;
}

