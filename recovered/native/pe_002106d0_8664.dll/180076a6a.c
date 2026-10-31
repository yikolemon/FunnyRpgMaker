/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076a6a */

bool FUN_180076a6a(undefined8 param_1,char *param_2,ushort *param_3,ushort *param_4,
                  undefined8 *param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  ushort uVar1;
  byte *pbVar2;
  ushort *puVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  *param_5 = param_3;
  *param_8 = param_6;
  puVar3 = (ushort *)*param_5;
  if (puVar3 != param_4) {
    while (param_6 != param_7) {
      uVar1 = *puVar3;
      if (uVar1 < 0x80) {
        iVar7 = 0;
        bVar4 = (byte)uVar1;
      }
      else if (uVar1 < 0x800) {
        bVar4 = (byte)(uVar1 >> 6) | 0xc0;
        iVar7 = 1;
      }
      else {
        bVar4 = (byte)(uVar1 >> 0xc) | 0xe0;
        iVar7 = 2;
      }
      if (*param_2 == '\0') {
        *param_2 = '\x01';
        param_6 = *param_8;
        puVar3 = (ushort *)*param_5;
      }
      uVar6 = (ulonglong)(iVar7 + 1);
      if (param_7 - param_6 < (longlong)uVar6) break;
      *param_5 = puVar3 + 1;
      pbVar2 = (byte *)*param_8;
      *param_8 = (longlong)(pbVar2 + 1);
      *pbVar2 = bVar4;
      if (0x7f < uVar1) {
        iVar7 = iVar7 * 6;
        do {
          iVar7 = iVar7 + -6;
          pbVar2 = (byte *)*param_8;
          *param_8 = (longlong)(pbVar2 + 1);
          *pbVar2 = (byte)(uVar1 >> ((byte)iVar7 & 0x1f)) & 0x3f | 0x80;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (1 < uVar5);
      }
      puVar3 = (ushort *)*param_5;
      if (puVar3 == param_4) break;
      param_6 = *param_8;
    }
  }
  return param_3 == puVar3;
}

