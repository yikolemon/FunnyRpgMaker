/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077ddfa */

/* WARNING: Control flow encountered bad instruction data */

void FUN_14077ddfa(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar4;
  byte bVar6;
  longlong unaff_RBX;
  uint uVar7;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  bool bVar8;
  byte bVar3;
  undefined4 *puVar5;
  
  bVar6 = (byte)param_1;
  uVar7 = (uint)&stack0xffffffffffffffe0 - 0x14;
  uVar4 = (int)&stack0xfffffffffffffff8 - 0x18;
  puVar5 = (undefined4 *)(ulonglong)uVar4;
  puVar5[-1] = uVar7;
  puVar5[2] = 0xffffffff;
  puVar5[1] = 0x1012cb70;
  *puVar5 = *(undefined4 *)(in_FS_OFFSET + 0x14077de1e);
  *(uint *)(in_FS_OFFSET + 0x5189d23100000000) = uVar4;
  bVar8 = 0x76 < (byte)uVar4 || CARRY1((byte)uVar4 + 0x89,(uint)&stack0xffffffffffffffe0 < 0x14);
  *(longlong *)((ulonglong)uVar7 - 8) = param_1;
  pbVar1 = (byte *)(param_1 + 0x5189e04d);
  bVar2 = *pbVar1;
  bVar3 = *pbVar1;
  *pbVar1 = bVar3 + bVar6 + bVar8;
  *(char *)(param_1 + 0x570f0850) =
       (*(char *)(param_1 + 0x570f0850) - bVar6) -
       (CARRY1(bVar2,bVar6) || CARRY1(bVar3 + bVar6,bVar8));
  pbVar1 = (byte *)(unaff_RBX + 0xff2e04d);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(byte **)((ulonglong)uVar7 - 0x10) = unaff_RDI;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 0x10) = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x7c1fba7500000000) =
       *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

