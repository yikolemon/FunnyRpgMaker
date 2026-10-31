/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233c40 */

uint __thiscall FUN_10233c40(int param_1,ushort param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  wint_t wVar3;
  uint uVar4;
  undefined2 extraout_var;
  FILE *_File;
  undefined4 *puVar5;
  
  uVar4 = **(uint **)(param_1 + 0x1c);
  if (((uVar4 != 0) && (**(uint **)(param_1 + 0xc) < uVar4)) &&
     ((param_2 == 0xffff || (*(ushort *)(uVar4 - 2) == param_2)))) {
    **(int **)(param_1 + 0x2c) = **(int **)(param_1 + 0x2c) + 1;
    **(int **)(param_1 + 0x1c) = **(int **)(param_1 + 0x1c) + -2;
    uVar4 = (uint)param_2;
    if (param_2 == 0xffff) {
      uVar4 = 0;
    }
    return uVar4;
  }
  _File = *(FILE **)(param_1 + 0x4c);
  if ((_File != (FILE *)0x0) && (param_2 != 0xffff)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      wVar3 = _ungetwc(param_2,_File);
      puVar5 = (undefined4 *)CONCAT22(extraout_var,wVar3);
      if (wVar3 != 0xffff) goto LAB_10233ce2;
    }
    _File = *(FILE **)(param_1 + 0x1c);
    puVar1 = (ushort *)(param_1 + 0x3c);
    if ((ushort *)_File->_ptr != puVar1) {
      *puVar1 = param_2;
      puVar2 = (ushort *)**(int **)(param_1 + 0xc);
      if (puVar2 != puVar1) {
        *(ushort **)(param_1 + 0x50) = puVar2;
        *(int *)(param_1 + 0x54) = **(int **)(param_1 + 0x1c) + **(int **)(param_1 + 0x2c) * 2;
      }
      **(int **)(param_1 + 0xc) = (int)puVar1;
      **(int **)(param_1 + 0x1c) = (int)puVar1;
      puVar5 = *(undefined4 **)(param_1 + 0x2c);
      *puVar5 = 1;
LAB_10233ce2:
      return CONCAT22((short)((uint)puVar5 >> 0x10),param_2);
    }
  }
  return CONCAT22((short)((uint)_File >> 0x10),0xffff);
}

