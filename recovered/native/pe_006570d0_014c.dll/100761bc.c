/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100761bc */

bool FUN_100761bc(char *param_1,ushort *param_2,ushort *param_3,undefined4 *param_4,int param_5,
                 int param_6,int *param_7)

{
  ushort uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  
  *param_4 = param_2;
  *param_7 = param_5;
  puVar4 = (ushort *)*param_4;
  if (puVar4 != param_3) {
    while (param_5 != param_6) {
      uVar1 = *puVar4;
      if (uVar1 < 0x80) {
        iVar6 = 0;
        uVar5 = uVar1;
      }
      else if (uVar1 < 0x800) {
        iVar6 = 1;
        uVar5 = (ushort)(byte)((byte)(uVar1 >> 6) | 0xc0);
      }
      else {
        iVar6 = 2;
        uVar5 = (ushort)(byte)((byte)(uVar1 >> 0xc) | 0xe0);
      }
      if (*param_1 == '\0') {
        *param_1 = '\x01';
        param_5 = *param_7;
        puVar4 = (ushort *)*param_4;
      }
      if (param_6 - param_5 <= iVar6) break;
      *param_4 = puVar4 + 1;
      puVar2 = (undefined1 *)*param_7;
      *param_7 = (int)(puVar2 + 1);
      *puVar2 = (char)uVar5;
      if (0x7f < uVar1) {
        uVar7 = iVar6 + 1;
        iVar6 = iVar6 * 6;
        do {
          iVar6 = iVar6 + -6;
          pbVar3 = (byte *)*param_7;
          *param_7 = (int)(pbVar3 + 1);
          *pbVar3 = (byte)(uVar1 >> ((byte)iVar6 & 0x1f)) & 0x3f | 0x80;
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
      }
      puVar4 = (ushort *)*param_4;
      if (puVar4 == param_3) break;
      param_5 = *param_7;
    }
  }
  return param_2 == puVar4;
}

