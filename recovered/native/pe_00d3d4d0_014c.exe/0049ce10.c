/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ce10 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

undefined8 __cdecl
FUN_0049ce10(uint param_1,undefined4 param_2,undefined4 param_3,PLARGE_INTEGER param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_5 + 9) = 1;
    param_5[8] = 0;
    *(undefined1 *)(param_5 + 7) = 1;
    param_5[6] = 9;
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
        if ((*(byte *)(iVar2 + 0x28 + (&DAT_00521cc8)[(int)param_1 >> 6]) & 1) == 0) {
          *(undefined1 *)(param_5 + 7) = 1;
          param_5[6] = 9;
          *(undefined1 *)(param_5 + 9) = 1;
          param_5[8] = 0;
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = FUN_0049cf35(param_1,param_2,param_3,param_4,(int)param_5);
        }
        FUN_0049cf2d();
        ExceptionList = local_14;
        return uVar3;
      }
    }
    *(undefined1 *)(param_5 + 9) = 1;
    param_5[8] = 0;
    *(undefined1 *)(param_5 + 7) = 1;
    param_5[6] = 9;
    FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_5);
  }
  ExceptionList = local_14;
  return 0xffffffffffffffff;
}

