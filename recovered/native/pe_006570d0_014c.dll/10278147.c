/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278147 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10278147(ushort *param_1,byte *param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_103a547c = 0;
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_4 + 0x14) == '\0') {
        FUN_1025ec50();
      }
      piVar1 = *(int **)(param_4 + 0xc);
      if (piVar1[2] != 0xfde9) {
        if (piVar1[0x2a] == 0) {
          if (param_1 != (ushort *)0x0) {
            *param_1 = (ushort)*param_2;
          }
          return 1;
        }
        if (*(short *)(*piVar1 + (uint)*param_2 * 2) < 0) {
          if ((((1 < piVar1[1]) && (piVar1[1] <= (int)param_3)) &&
              (iVar2 = FUN_102741c1(piVar1[2],9,param_2,piVar1[1],param_1,param_1 != (ushort *)0x0),
              iVar2 != 0)) ||
             ((*(uint *)(*(int *)(param_4 + 0xc) + 4) <= param_3 && (param_2[1] != 0)))) {
            return *(int *)(*(int *)(param_4 + 0xc) + 4);
          }
        }
        else {
          iVar2 = FUN_102741c1(piVar1[2],9,param_2,1,param_1,param_1 != (ushort *)0x0);
          if (iVar2 != 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_4 + 0x1c) = 1;
        *(undefined4 *)(param_4 + 0x18) = 0x2a;
        return -1;
      }
      iVar2 = FUN_1027851c(param_1,param_2,param_3,&DAT_103a547c,param_4);
      if (iVar2 < 0) {
        return -1;
      }
      return iVar2;
    }
    if (param_1 != (ushort *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}

