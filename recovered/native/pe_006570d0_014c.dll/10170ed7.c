/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10170ed7 */

int __fastcall FUN_10170ed7(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_10170fb1();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = 8;
    if ((8 < param_1[4]) && (iVar3 = 0x10, param_1[4] != 0x10)) {
      FUN_10170e07();
      return 0;
    }
    *param_4 = iVar3;
    puVar2 = (undefined4 *)*param_1;
    iVar3 = param_1[3];
    param_1[3] = 0;
    if (puVar2[3] != 4) {
      if (*param_4 == 8) {
        iVar3 = FUN_101717e3(*puVar2,puVar2[1]);
      }
      else {
        iVar3 = FUN_10171952(*puVar2,puVar2[1]);
      }
      *(undefined4 *)(*param_1 + 0xc) = 4;
      if (iVar3 == 0) {
        return 0;
      }
      puVar2 = (undefined4 *)*param_1;
    }
    *param_2 = *puVar2;
    *param_3 = *(undefined4 *)(*param_1 + 4);
  }
  thunk_FUN_10274120(param_1[3]);
  param_1[3] = 0;
  thunk_FUN_10274120(param_1[2]);
  param_1[2] = 0;
  thunk_FUN_10274120(param_1[1]);
  param_1[1] = 0;
  return iVar3;
}

