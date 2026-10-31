/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044bebf */

int __cdecl FUN_0044bebf(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *local_40;
  undefined4 local_3c [10];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_40;
  piVar1 = (int *)param_1[1];
  *(undefined4 **)(param_2 + 0x22c) = param_1;
  *(undefined1 *)(param_2 + 0x229) = 0;
  iVar5 = 0;
  if ((*(int *)(param_2 + 0x70) == 0) || (*(int *)(param_2 + 0x74) == 0)) goto LAB_0044bfe8;
  _memset((void *)(param_2 + 0xb8),0,0x16c);
  *(undefined4 *)(param_2 + 0x180) = 7;
  *(undefined4 *)(param_2 + 0x184) = 1;
  *(undefined4 *)(param_2 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x20c) = 0xf5c;
  *(undefined4 *)(param_2 + 0x17c) = 0x27a000;
  *(int *)(param_2 + 0x224) = param_2;
  *(undefined4 *)(param_2 + 0x244) = param_3;
  *(undefined4 *)(param_2 + 0x248) = param_4;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = 0x61;
    uVar4 = 0x2000;
  }
  else {
    uVar2 = param_1[0x184] + 1;
    uVar4 = 0x5000;
  }
  local_40 = piVar1;
  iVar3 = FUN_0044c397(local_3c,uVar4,param_2 + 0xb8,(int *)*param_1,uVar2,
                       *(undefined2 *)(param_2 + 0xac),*(undefined2 *)(param_2 + 0xae));
  piVar1 = local_40;
  iVar6 = 0;
  iVar5 = iVar6;
  if (((iVar3 == 0) &&
      (iVar5 = FUN_00420696((int)local_40,*(int *)(param_2 + 0x70) + param_1[3]), iVar5 == 0)) &&
     (iVar5 = FUN_00420be1(piVar1,*(uint *)(param_2 + 0x74)), iVar5 == 0)) {
    iVar5 = FUN_0044c427((int)local_3c,(byte *)piVar1[8],(byte *)piVar1[9]);
    FUN_00420cde(piVar1);
    if (iVar5 == 0) {
      *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) & 0xfe;
      iVar5 = *(int *)(param_2 + 0x210);
      if (iVar5 < 0) {
        iVar5 = -iVar5;
LAB_0044c047:
        *(int *)(param_2 + 0x210) = iVar5;
      }
      else if (iVar5 == 0) {
        iVar5 = 0x3ade68b1;
        goto LAB_0044c047;
      }
      if (1000 < *(uint *)(param_2 + 0x180)) {
        *(undefined4 *)(param_2 + 0x180) = 7;
      }
      iVar5 = iVar6;
      if (1000 < *(uint *)(param_2 + 0x184)) {
        *(undefined4 *)(param_2 + 0x184) = 1;
      }
    }
  }
  FUN_0044c6d6(param_2);
  FUN_0044c6ed(local_3c);
LAB_0044bfe8:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_40);
  }
  return iVar5;
}

