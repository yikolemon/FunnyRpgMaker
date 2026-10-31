/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c145a */

undefined4 FUN_1407c145a(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar4;
  longlong in_RCX;
  ulonglong uVar5;
  longlong in_FS_OFFSET;
  undefined8 in_XMM0_Qb;
  undefined4 *puVar3;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = (int)&stack0xfffffffffffffff8 - 0xc;
  puVar3 = (undefined4 *)(ulonglong)uVar2;
  puVar3[-1] = (uint)&stack0xfffffffffffffff8 - 0x1c;
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0x1016a650;
  *puVar3 = *(undefined4 *)(in_FS_OFFSET + 0x1407c147b);
  *(uint *)(in_FS_OFFSET + 0xfc0570f00000000) = uVar2;
  *(int *)(in_RCX + 0x58) =
       *(int *)(in_RCX + 0x58) + uVar2 + (uint)((uint)&stack0xfffffffffffffff8 < 0x1c);
  *(undefined8 *)(in_RCX + 0x4c) = param_1;
  *(undefined8 *)(in_RCX + 0x54) = in_XMM0_Qb;
  *(undefined8 *)(in_RCX + 0x3c) = param_1;
  *(undefined8 *)(in_RCX + 0x44) = in_XMM0_Qb;
  *(undefined8 *)(in_RCX + 0x2c) = param_1;
  *(undefined8 *)(in_RCX + 0x34) = in_XMM0_Qb;
  *(undefined4 *)(uVar5 - 0x14) = 0;
  puVar3[2] = 0;
  *(int *)(uVar5 - 0x1c) = (int)in_RCX + 0x68;
  *(undefined4 *)(uVar5 - 4) = 0xffffffff;
  *(undefined8 *)(in_RCX + 0x68) = param_1;
  *(undefined8 *)(in_RCX + 0x70) = in_XMM0_Qb;
  *(undefined4 *)(in_RCX + 0x78) = 0;
  *(undefined4 *)(uVar5 - 4) = 1;
  *(int *)(uVar5 - 0x18) = (int)in_RCX;
  puVar4 = (undefined8 *)(ulonglong)*(uint *)(uVar5 - 0x18);
  *(undefined8 *)((longlong)puVar4 + 0x6c) = param_1;
  *(undefined8 *)((longlong)puVar4 + 0x74) = in_XMM0_Qb;
  puVar4[0xc] = param_1;
  puVar4[0xd] = in_XMM0_Qb;
  puVar4[10] = param_1;
  puVar4[0xb] = in_XMM0_Qb;
  puVar4[8] = param_1;
  puVar4[9] = in_XMM0_Qb;
  puVar4[6] = param_1;
  puVar4[7] = in_XMM0_Qb;
  puVar4[4] = param_1;
  puVar4[5] = in_XMM0_Qb;
  puVar4[2] = param_1;
  puVar4[3] = in_XMM0_Qb;
  *puVar4 = param_1;
  puVar4[1] = in_XMM0_Qb;
  *(undefined4 *)(uVar5 - 4) = 0xffffffff;
  *(undefined4 *)(uVar5 - 0x14) = 0;
  uVar1 = *(undefined4 *)(uVar5 - 0x18);
  *(undefined4 *)(in_FS_OFFSET + 0x1407c1502) = *(undefined4 *)(uVar5 - 0xc);
  return uVar1;
}

