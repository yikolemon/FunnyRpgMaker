/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180033b12 */

byte * FUN_180033b12(longlong *param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar3 = (uint)(*param_2 >> 3);
  lVar7 = (longlong)(char)(&DAT_180385f89)[uVar3];
  uVar6 = (ulonglong)((0x80ff0000U >> uVar3 & 1) != 0);
  uVar3 = (param_2[3] & 0x3f |
          (param_2[2] & 0x3f) << 6 |
          (param_2[1] & 0x3f) << 0xc |
          ((uint)*param_2 & *(uint *)(&DAT_1802b07d0 + lVar7 * 4)) << 0x12) >>
          ((&DAT_1802b0810)[lVar7 * 4] & 0x1f);
  uVar4 = ((param_2[1] >> 2 & 0xfffffff0) + (uint)(param_2[2] >> 6) * 4 | (uint)(param_2[3] >> 6) |
           (uint)(uVar3 < *(uint *)(&DAT_1802b07f0 + lVar7 * 4)) << 6 |
           (uint)(0x10ffff < uVar3) << 8 | (uint)((uVar3 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a;
  bVar1 = (&DAT_1802b0830)[lVar7 * 4];
  if (uVar4 >> (bVar1 & 0x1f) == 0) {
    lVar5 = uVar6 + lVar7;
    if ((((uVar3 < 0x20) || (uVar3 == 0x22)) || (uVar3 == 0x5c)) || (uVar3 == 0x7f))
    goto LAB_180033c3c;
  }
  else {
    uVar3 = 0xffffffff;
    lVar5 = 1;
  }
  cVar2 = FUN_180027f00(uVar3);
  if (cVar2 != '\0') {
    if (uVar4 >> (bVar1 & 0x1f) != 0) {
      return param_2 + 1;
    }
    return param_2 + lVar7 + uVar6;
  }
LAB_180033c3c:
  param_1 = (longlong *)*param_1;
  *param_1 = param_3;
  param_1[1] = lVar5 + param_3;
  *(uint *)(param_1 + 2) = uVar3;
  return (byte *)0x0;
}

