/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00491640 */

float10 __cdecl FUN_00491640(uint param_1,uint param_2,int *param_3)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  double local_14;
  
  if (param_3 == (int *)0x0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return (float10)0;
  }
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    *param_3 = -1;
    if (((param_1 != 0) || ((param_2 != 0x7ff00000 && (param_2 != 0xfff00000)))) &&
       ((param_2 & 0x7ff80000) != 0x7ff80000)) {
      uVar2 = FUN_004a1510();
      fVar4 = (float10)FUN_004a0be0(8,0x17,CONCAT44(param_2,param_1),
                                    (double)CONCAT44(param_2,param_1) + DAT_004a88f8,uVar2);
      return fVar4;
    }
  }
  else {
    if ((double)CONCAT44(param_2,param_1) != 0.0) {
      if (((param_2 & 0x7ff00000) == 0) && (param_1 != 0 || (param_2 & 0xfffff) != 0)) {
        uVar2 = param_2 & 0xfffff;
        iVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (uVar2 == 0) {
          iVar3 = 0x1f;
          if (param_1 != 0) {
            for (; param_1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
            }
          }
        }
        else {
          iVar3 = iVar3 + 0x20;
        }
        lVar5 = __allshl(0x34 - (char)iVar3,uVar2);
        uVar2 = (uint)((ulonglong)lVar5 >> 0x20) & 0xffefffff;
        if ((double)CONCAT44(param_2,param_1) < 0.0) {
          uVar2 = uVar2 | 0x80000000;
        }
        local_14 = (double)(CONCAT44(uVar2,(int)lVar5) & 0xbfefffffffffffff | 0x3fe0000000000000);
        *param_3 = iVar3 + -0x431;
        return (float10)local_14;
      }
      local_14 = (double)(CONCAT44(param_2,param_1) & 0xbfefffffffffffff | 0x3fe0000000000000);
      *param_3 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
      return (float10)local_14;
    }
    *param_3 = 0;
  }
  return (float10)(double)CONCAT44(param_2,param_1);
}

