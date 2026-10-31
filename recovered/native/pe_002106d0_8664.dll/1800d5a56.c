/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d5a56 */

void FUN_1800d5a56(void)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined *puStack_40;
  undefined4 local_38;
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  FUN_18013799d();
  FUN_18013309a(&DAT_18035f107,0);
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180111069(local_28);
  fVar3 = (float)FUN_18015aacb(DAT_1802dbb28);
  fVar6 = local_28[0];
  if (fVar3 <= local_28[0]) {
    fVar6 = fVar3;
  }
  FUN_1800ffdb5(fVar6);
  local_48 = 0;
  puStack_40 = (undefined *)0x0;
  local_38 = 0;
  cVar1 = FUN_180145a54(&DAT_18036a403,6,&DAT_180418400,0);
  if (cVar1 != '\0') {
    FUN_1800d9e30();
  }
  FUN_180137ca1();
  cVar1 = FUN_180159cb6(&DAT_18035f516,&DAT_1804027c0,DAT_1802dbb2c,DAT_1802dbb30);
  if (cVar1 != '\0') {
    FUN_1800d9c3a();
    FUN_1800e2378();
  }
  FUN_180137ca1();
  uVar5 = DAT_1802dbb34;
  uVar4 = FUN_18015aacb(DAT_1802dbb34);
  uVar4 = FUN_1801599d0(&PTR_DAT_1804026a0,3,uVar4);
  FUN_1800d9cab(uVar4);
  FUN_180137ca1();
  uVar5 = FUN_18015aacb(uVar5);
  lVar2 = FUN_1801599d0(&PTR_DAT_1804026c0,2,uVar5);
  if (lVar2 == 1) {
    FUN_1800d9efc();
  }
  else if (lVar2 == 0) {
    FUN_1800d9ea1();
  }
  FUN_180137ca1();
  cVar1 = FUN_180159cb6(&DAT_18035f4ac,&DAT_1804027c1,DAT_1802dbb2c,DAT_1802dbb30);
  if (cVar1 != '\0') {
    FUN_1800d9f57();
    FUN_1800e2378();
  }
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180111069(local_28);
  FUN_1800ffdb5(local_28[0]);
  puStack_40 = &DAT_18036b4b0;
  local_38 = 0;
  local_48 = CONCAT44(local_48._4_4_,10);
  cVar1 = FUN_18013d731("##movespeed",&DAT_1804027c4,DAT_1802dbb38,0xfffffffb);
  if (cVar1 != '\0') {
    FUN_1800d9f57();
    FUN_1800e2378();
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
}

