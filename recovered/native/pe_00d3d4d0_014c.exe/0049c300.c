/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049c300 */

undefined4 __fastcall FUN_0049c300(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  if (param_1[1] == param_1[2]) {
    if (*param_1 == 0) {
      pvVar3 = FUN_00497060(4,4);
      *param_1 = (int)pvVar3;
      FUN_00495f00((LPVOID)0x0);
      iVar1 = *param_1;
      if (iVar1 != 0) {
        param_1[1] = iVar1;
        param_1[2] = iVar1 + 0x10;
        goto LAB_0049c30e;
      }
    }
    else {
      uVar4 = param_1[2] - *param_1 >> 2;
      if (uVar4 < 0x80000000) {
        pvVar3 = __recalloc_base((void *)*param_1,uVar4 * 2,4);
        if (pvVar3 == (LPVOID)0x0) {
          uVar2 = 0xc;
        }
        else {
          *param_1 = (int)pvVar3;
          param_1[1] = (int)((int)pvVar3 + uVar4 * 4);
          param_1[2] = (int)((int)pvVar3 + uVar4 * 8);
          uVar2 = 0;
        }
        FUN_00495f00((LPVOID)0x0);
        return uVar2;
      }
    }
    uVar2 = 0xc;
  }
  else {
LAB_0049c30e:
    uVar2 = 0;
  }
  return uVar2;
}

