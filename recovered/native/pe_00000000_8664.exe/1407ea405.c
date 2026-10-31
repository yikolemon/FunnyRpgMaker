/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ea405 */

void FUN_1407ea405(void)

{
  undefined4 *puVar1;
  longlong unaff_R12;
  undefined4 unaff_R15D;
  
  if ((DAT_150b8d64b & 3) != 0) {
    return;
  }
  puVar1 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  puVar1[3] = 2;
  puVar1[1] = 0;
  *puVar1 = 0x103a3234;
  puVar1[2] = 0x80;
  *(undefined8 *)(puVar1 + -2) = 0x1407ea43a;
  FUN_1407eb0aa();
  puVar1[3] = 0;
  puVar1[1] = 0;
  *puVar1 = 0x103a3234;
  puVar1[4] = 0x10355ea3;
  *(undefined8 *)(puVar1 + -2) = 0x1407ea452;
  FUN_1407eb116();
  *(undefined4 *)(unaff_R12 * 2 + 0xc) = unaff_R15D;
  puVar1[1] = 0;
  *puVar1 = 0x103a3234;
  puVar1[4] = 0x1034a790;
  *(undefined8 *)(puVar1 + -2) = 0x1407ea46d;
  FUN_1407eb116();
  puVar1[3] = 2;
  puVar1[1] = 0x3000;
  *puVar1 = 0x103a3254;
  puVar1[2] = 0x300f;
  *(undefined8 *)(puVar1 + -2) = 0x1407ea48f;
  FUN_1407eb0aa();
  puVar1[4] = 0x3000;
  puVar1[3] = 0;
  puVar1[1] = 0x3000;
  *puVar1 = 0x103a3254;
  *(undefined8 *)(puVar1 + -2) = 0x1407ea4a3;
  FUN_1407eb0e8();
  puVar1[3] = 0;
  puVar1[1] = 0x3000;
  *puVar1 = 0x103a3254;
  puVar1[4] = 0x3001;
  *(undefined8 *)(puVar1 + -2) = 0x1407ea4bb;
  FUN_1407eb0e8();
  puVar1[3] = 0;
  puVar1[1] = 0x3000;
  *puVar1 = 0x103a3254;
  puVar1[4] = 0x3002;
  *(undefined8 *)(puVar1 + -2) = 0x1407ea4d3;
  FUN_1407eb0e8();
  return;
}

