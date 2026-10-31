/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e0542 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e0542(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  puVar7 = (undefined8 *)(ulonglong)(uint)puVar6[9];
  puVar6[3] = *(undefined4 *)puVar7;
  puVar6[1] = *(undefined4 *)((longlong)puVar7 + 4);
  uVar1 = *(undefined4 *)(ulonglong)*(uint *)(param_1 + 0x2c);
  uVar2 = ((undefined4 *)(ulonglong)*(uint *)(param_1 + 0x2c))[1];
  *puVar6 = *(undefined4 *)(ulonglong)(uint)puVar6[10];
  puVar6[2] = ((undefined4 *)(ulonglong)(uint)puVar6[10])[1];
  sVar5 = (short)*(undefined4 *)(param_1 + 0x28);
  *(short *)(ulonglong)*(uint *)(param_1 + 0x34) = sVar5;
  *(short *)((ulonglong)*(uint *)(param_1 + 0x34) + 2) = sVar5 + 1;
  *(short *)((ulonglong)*(uint *)(param_1 + 0x34) + 4) = sVar5 + 2;
  *(short *)((ulonglong)*(uint *)(param_1 + 0x34) + 6) = sVar5;
  *(short *)((ulonglong)*(uint *)(param_1 + 0x34) + 8) = sVar5 + 2;
  *(short *)((ulonglong)*(uint *)(param_1 + 0x34) + 10) = sVar5 + 3;
  *(undefined8 *)(ulonglong)*(uint *)(param_1 + 0x30) = *puVar7;
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)((ulonglong)uVar3 + 0xc) = uVar2;
  *(undefined4 *)((ulonglong)uVar3 + 8) = uVar1;
  uVar4 = puVar6[0xb];
  *(undefined4 *)((ulonglong)*(uint *)(param_1 + 0x30) + 0x10) = uVar4;
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)((ulonglong)uVar3 + 0x14) = *puVar6;
  *(undefined4 *)((ulonglong)uVar3 + 0x18) = puVar6[1];
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)((ulonglong)uVar3 + 0x20) = uVar2;
  *(undefined4 *)((ulonglong)uVar3 + 0x1c) = uVar1;
  *(undefined4 *)((ulonglong)*(uint *)(param_1 + 0x30) + 0x24) = uVar4;
  *(undefined8 *)((ulonglong)*(uint *)(param_1 + 0x30) + 0x28) =
       *(undefined8 *)(ulonglong)(uint)puVar6[10];
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)((ulonglong)uVar3 + 0x34) = uVar2;
  *(undefined4 *)((ulonglong)uVar3 + 0x30) = uVar1;
  *(undefined4 *)((ulonglong)*(uint *)(param_1 + 0x30) + 0x38) = uVar4;
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)((ulonglong)uVar3 + 0x3c) = puVar6[3];
  *(undefined4 *)((ulonglong)uVar3 + 0x40) = puVar6[2];
  uVar3 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)((ulonglong)uVar3 + 0x48) = uVar2;
  *(undefined4 *)((ulonglong)uVar3 + 0x44) = uVar1;
  *(undefined4 *)((ulonglong)*(uint *)(param_1 + 0x30) + 0x4c) = uVar4;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 4;
  *(ulonglong *)(param_1 + 0x30) =
       CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) + iRam0000000150ae19b9,
                (int)*(undefined8 *)(param_1 + 0x30) + _DAT_150ae19b5);
  return;
}

