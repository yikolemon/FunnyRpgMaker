/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048a02d */

int __thiscall FUN_0048a02d(void *this,int param_1)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_004a7100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)((int)this + 8);
  if ((char)piVar1[5] == '\0') {
    FUN_00488f30(piVar1);
  }
  piVar1 = (int *)piVar1[3];
  pbVar7 = *(byte **)((int)this + 0x30);
  iVar8 = 0;
  if (piVar1[2] == 0xfde9) {
    if (0 < param_1) {
      do {
        if (*pbVar7 == 0) {
          ExceptionList = local_10;
          return iVar8;
        }
        uVar3 = FUN_00499486(pbVar7);
        uVar6 = 1;
        if (uVar3 - 1 < 4) {
          uVar6 = uVar3;
        }
        iVar4 = iVar8 + 1;
        if (uVar3 != 4) {
          iVar4 = iVar8;
        }
        pbVar7 = pbVar7 + uVar6;
        iVar8 = iVar4 + 1;
      } while (iVar8 < param_1);
    }
  }
  else if (0 < param_1) {
    do {
      if (*pbVar7 == 0) {
        ExceptionList = local_10;
        return iVar8;
      }
      uVar2 = ___acrt_locale_get_ctype_array_value(*piVar1,(uint)*pbVar7,0x8000);
      pbVar5 = pbVar7 + 1;
      if (CONCAT22(extraout_var,uVar2) == 0) {
        pbVar5 = pbVar7;
      }
      iVar8 = iVar8 + 1;
      pbVar7 = pbVar5 + 1;
    } while (iVar8 < param_1);
  }
  ExceptionList = local_10;
  return iVar8;
}

