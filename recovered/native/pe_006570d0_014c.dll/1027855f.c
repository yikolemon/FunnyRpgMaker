/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027855f */

int __thiscall
FUN_1027855f(uint param_1,ushort *param_2,int *param_3,uint param_4,undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  uint local_c;
  uint uStack_8;
  
  iVar7 = *param_3;
  local_c = param_1;
  uStack_8 = param_1;
  puVar6 = param_2;
  if (param_2 == (ushort *)0x0) {
    iVar2 = 0;
    uVar1 = FUN_10278672(iVar7);
    while (iVar4 = FUN_102782b8(0,iVar7,uVar1,param_5,param_6), iVar4 != -1) {
      if (iVar4 == 0) {
        return iVar2;
      }
      iVar7 = iVar7 + iVar4;
      iVar3 = iVar2 + 1;
      if (iVar4 != 4) {
        iVar3 = iVar2;
      }
      iVar2 = iVar3 + 1;
      uVar1 = FUN_10278672(iVar7);
    }
    *(undefined1 *)(param_6 + 0x1c) = 1;
    *(undefined4 *)(param_6 + 0x18) = 0x2a;
    iVar2 = -1;
  }
  else {
    for (; param_4 != 0; param_4 = param_4 - 1) {
      uVar1 = FUN_10278672(iVar7);
      iVar2 = FUN_102782b8(&local_c,iVar7,uVar1,param_5,param_6);
      if (iVar2 == -1) {
        *param_3 = iVar7;
        *(undefined1 *)(param_6 + 0x1c) = 1;
        *(undefined4 *)(param_6 + 0x18) = 0x2a;
        return -1;
      }
      if (iVar2 == 0) {
        iVar7 = 0;
        *puVar6 = 0;
        break;
      }
      uVar5 = local_c;
      if (0xffff < local_c) {
        if (param_4 < 2) break;
        local_c = local_c - 0x10000;
        param_4 = param_4 - 1;
        *puVar6 = (ushort)(local_c >> 10) | 0xd800;
        puVar6 = puVar6 + 1;
        uVar5 = local_c & 0x3ff | 0xdc00;
      }
      *puVar6 = (ushort)uVar5;
      iVar7 = iVar7 + iVar2;
      puVar6 = puVar6 + 1;
    }
    iVar2 = (int)puVar6 - (int)param_2 >> 1;
    *param_3 = iVar7;
  }
  return iVar2;
}

