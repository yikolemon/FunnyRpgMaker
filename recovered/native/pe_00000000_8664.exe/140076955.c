/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140076955 */

void FUN_140076955(uint *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  
  uVar1 = (uint)(*param_2 >> 3);
  lVar6 = (longlong)(char)(&DAT_140210460)[uVar1];
  uVar2 = lVar6 + (ulonglong)((0x80ff0000U >> uVar1 & 1) != 0);
  pbVar3 = param_2 + uVar2;
  if (param_3 != (byte *)0x0) {
    pbVar3 = param_3;
  }
  uVar5 = 0;
  uVar1 = (uint)*param_2;
  if (pbVar3 <= param_2) {
    uVar1 = uVar5;
  }
  if (param_2 + 1 < pbVar3) {
    uVar5 = (uint)param_2[1];
  }
  if (param_2 + 2 < pbVar3) {
    bVar7 = param_2[2];
  }
  else {
    bVar7 = 0;
  }
  if (param_2 + 3 < pbVar3) {
    bVar4 = param_2[3];
  }
  else {
    bVar4 = 0;
  }
  uVar8 = (bVar4 & 0x3f |
          (bVar7 & 0x3f) << 6 |
          (uVar5 & 0x3f) << 0xc | (uVar1 & *(uint *)(&DAT_140210480 + lVar6 * 4)) << 0x12) >>
          ((&DAT_1402104c0)[lVar6 * 4] & 0x1f);
  *param_1 = uVar8;
  if ((((uVar5 >> 2 & 0xfffffff0) + (uint)(bVar7 >> 6) * 4 | (uint)(bVar4 >> 6) |
        (uint)(uVar8 < *(uint *)(&DAT_1402104a0 + lVar6 * 4)) << 6 | (uint)(0xffff < uVar8) << 8 |
       (uint)((uVar8 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a) >> ((&DAT_1402104e0)[lVar6 * 4] & 0x1f)
      != 0) {
    FUN_140077fbc(uVar2 & 0xffffffff,
                  ((((uint)((char)uVar5 != '\0') - (uint)((char)uVar1 == '\0')) - (uint)(bVar7 == 0)
                   ) + 3) - (uint)(bVar4 == 0));
    *param_1 = 0xfffd;
  }
  return;
}

