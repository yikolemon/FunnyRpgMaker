/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140177c5a */

undefined8 FUN_140177c5a(longlong param_1,ulonglong *param_2,byte *param_3,char param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  pbVar1 = (byte *)*param_2;
  pbVar5 = pbVar1 + 5;
  uVar4 = 6;
  if (pbVar5 <= param_3) {
    puVar2 = *(ushort **)(param_1 + 0x18);
    *puVar2 = (ushort)*pbVar1;
    puVar2[1] = (ushort)pbVar1[1];
    puVar2[2] = (short)(char)pbVar1[2];
    puVar2[3] = (short)(char)pbVar1[3];
    puVar2[4] = (ushort)pbVar1[4];
    if (param_4 == '\0') {
      puVar2[5] = 0;
      puVar2[6] = 0;
      uVar3 = 0;
    }
    else {
      pbVar5 = pbVar1 + 8;
      if (param_3 < pbVar5) {
        return 6;
      }
      puVar2[5] = (short)(char)pbVar1[5];
      puVar2[6] = (short)(char)pbVar1[6];
      uVar3 = (ushort)pbVar1[7];
    }
    puVar2[7] = uVar3;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *param_2 = (ulonglong)pbVar5;
    uVar4 = 0;
  }
  return uVar4;
}

