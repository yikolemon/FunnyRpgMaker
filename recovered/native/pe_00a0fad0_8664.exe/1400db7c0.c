/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400db7c0 */

ulonglong * FUN_1400db7c0(ulonglong *param_1,ulonglong *param_2,byte param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar3 = param_1;
  puVar2 = param_1;
  if ((((byte)DAT_1401ca374 & 4) != 0) && (7 < (ulonglong)((longlong)param_2 - (longlong)param_1)))
  {
    puVar3 = (ulonglong *)
             (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U) + (longlong)param_1);
    auVar7 = pshufb(ZEXT116(param_3),ZEXT816(0));
    do {
      uVar1 = *param_1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar1;
      param_1 = param_1 + 1;
      auVar6[0] = -((char)uVar1 == auVar7[0]);
      auVar6[1] = -((char)(uVar1 >> 8) == auVar7[1]);
      auVar6[2] = -((char)(uVar1 >> 0x10) == auVar7[2]);
      auVar6[3] = -((char)(uVar1 >> 0x18) == auVar7[3]);
      auVar6[4] = -((char)(uVar1 >> 0x20) == auVar7[4]);
      auVar6[5] = -((char)(uVar1 >> 0x28) == auVar7[5]);
      auVar6[6] = -((char)(uVar1 >> 0x30) == auVar7[6]);
      auVar6[7] = -((char)(uVar1 >> 0x38) == auVar7[7]);
      auVar6[8] = -(auVar7[8] == '\0');
      auVar6[9] = -(auVar7[9] == '\0');
      auVar6[10] = -(auVar7[10] == '\0');
      auVar6[0xb] = -(auVar7[0xb] == '\0');
      auVar6[0xc] = -(auVar7[0xc] == '\0');
      auVar6[0xd] = -(auVar7[0xd] == '\0');
      auVar6[0xe] = -(auVar7[0xe] == '\0');
      auVar6[0xf] = -(auVar7[0xf] == '\0');
      uVar1 = (ulonglong)
              (byte)(SUB161(auVar6 >> 7,0) & 1 | (SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar6 >> 0x17,0) & 1) << 2 | (SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar6 >> 0x27,0) & 1) << 4 | (SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar6 >> 0x37,0) & 1) << 6 | SUB161(auVar6 >> 0x3f,0) << 7);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(&DAT_1401608f0 + uVar1 * 8);
      auVar6 = pshufb(auVar5,auVar4);
      *puVar2 = auVar6._0_8_;
      puVar2 = (ulonglong *)((longlong)puVar2 + (ulonglong)(byte)(&DAT_1401610f0)[uVar1]);
    } while (param_1 != puVar3);
  }
  for (; puVar3 != param_2; puVar3 = (ulonglong *)((longlong)puVar3 + 1)) {
    if ((byte)*puVar3 != param_3) {
      *(byte *)puVar2 = (byte)*puVar3;
      puVar2 = (ulonglong *)((longlong)puVar2 + 1);
    }
  }
  return puVar2;
}

