/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dea15 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408dea15(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  float10 fVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  longlong unaff_RBP;
  float10 in_ST0;
  float10 in_ST1;
  
  if (*(char *)(param_2 + 0xe) == '\x05') {
    uVar6 = (undefined2)
            CONCAT71((uint7)((byte)((ushort)*(undefined2 *)(unaff_RBP + -0xa4) >> 8) & 0xfe | 2),
                     0x3f);
  }
  else {
    uVar6 = 0x133f;
  }
  *(undefined2 *)(unaff_RBP + -0xa2) = uVar6;
  fVar2 = (float10)0;
  *(int *)(unaff_RBP + -0x94) = (int)param_2;
  *(ushort *)(unaff_RBP + -0xa0) =
       (ushort)NAN(in_ST0) << 8 | (ushort)(in_ST0 < fVar2) << 9 | (ushort)(in_ST0 != fVar2) << 10 |
       (ushort)(in_ST0 == fVar2) << 0xe;
  *(undefined1 *)(unaff_RBP + -0x90) = 0;
  fVar2 = (float10)0;
  *(ushort *)(unaff_RBP + -0xa0) =
       (ushort)NAN(in_ST1) << 8 | (ushort)(in_ST1 < fVar2) << 9 | (ushort)(in_ST1 != fVar2) << 10 |
       (ushort)(in_ST1 == fVar2) << 0xe;
  cVar5 = (char)(*(char *)(unaff_RBP + -0x9f) << 1) >> 1;
  bVar1 = cVar5 << 1;
  cVar3 = (char)(*(char *)(unaff_RBP + -0x9f) << 1) >> 1;
  bVar4 = cVar3 << 1 | cVar3 < '\0';
  puVar7 = (undefined8 *)
           (ulonglong)
           ((int)param_2 +
            (int)(char)(*(byte *)(((ulonglong)bVar4 & 0xf) + 0x1032708e) |
                       *(char *)((ulonglong)(bVar1 & 0xf | cVar5 < '\0') + 0x1032708e) << 2) + 0x10)
  ;
  (*_DAT_150c3c2ba)(*(undefined4 *)puVar7);
                    /* WARNING: Could not recover jumptable at 0x0001408deaad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar7)(CONCAT11(bVar1,bVar4) & 0x404,param_2);
  return;
}

