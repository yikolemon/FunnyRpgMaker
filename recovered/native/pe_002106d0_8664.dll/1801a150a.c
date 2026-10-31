/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a150a */

void FUN_1801a150a(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1801a15cb(0x11);
  FUN_1800fdbca(param_1,0x1000,uVar2);
  uVar2 = FUN_1801a15cb(0x10);
  FUN_1800fdbca(param_1,0x2000,uVar2);
  uVar2 = FUN_1801a15cb(0x12);
  FUN_1800fdbca(param_1,0x4000,uVar2);
  cVar1 = FUN_1801a15cb(0x5b);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = FUN_1801a15cb(0x5c);
  }
  FUN_1800fdbca(param_1,0x8000,uVar2);
  return;
}

