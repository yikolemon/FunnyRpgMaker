/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006de5e */

short FUN_14006de5e(longlong param_1,uint param_2)

{
  ushort *puVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  
  puVar1 = (ushort *)FUN_1400791c0(*(longlong *)(param_1 + 0x18),param_2);
  sVar2 = 0;
  if ((((puVar1 != (ushort *)0x0) &&
       (uVar3 = (param_2 & 0xff) - (uint)(ushort)(*puVar1 << 8 | *puVar1 >> 8),
       uVar3 < (ushort)(puVar1[1] << 8 | puVar1[1] >> 8))) &&
      (uVar4 = puVar1[3] << 8 | puVar1[3] >> 8, uVar4 != 0)) &&
     (uVar4 = *(ushort *)((longlong)puVar1 + (ulonglong)uVar4 + (ulonglong)uVar3 * 2 + 6),
     uVar4 = uVar4 << 8 | uVar4 >> 8, uVar4 != 0)) {
    sVar2 = uVar4 + (puVar1[2] << 8 | puVar1[2] >> 8);
  }
  return sVar2;
}

