/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da60e */

void FUN_1800da60e(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  uint in_stack_ffffffffffffff30;
  undefined1 local_c8 [56];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 **local_80 [2];
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60 [2];
  uint local_4c [5];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  local_90 = 0;
  FUN_18001347a(local_60,&DAT_180402988,local_c8,1,1,in_stack_ffffffffffffff30 & 0xffffff00);
  FUN_1800139e8(local_60,local_80,0xffffffff,0x20,0,0);
  FUN_1800137c6(local_60);
  puVar2 = (undefined8 *)*param_1;
  if ((undefined8 ***)(puVar2 + 5) != local_80) {
    pppuVar3 = local_80;
    if (0xf < local_68) {
      pppuVar3 = (undefined8 ***)local_80[0];
    }
    FUN_180017ca0(puVar2 + 5,pppuVar3,local_70);
    puVar2 = (undefined8 *)*param_1;
  }
  FUN_1800d4bdc(*puVar2,local_80);
  cVar1 = FUN_18014f686(&DAT_180418510,*(undefined4 *)param_1[1]);
  if (cVar1 != '\0') {
    local_88 = 0;
    local_4c[0] = 0;
    while( true ) {
      cVar1 = FUN_18014f6a0(&DAT_180418510,&local_88,local_4c);
      if (cVar1 == '\0') break;
      FUN_1800dc42c(&DAT_180418348,local_60,(ulonglong)local_4c[0] * 8 + DAT_1804183c8);
      if ((undefined8 ***)(local_60[0] + 0x40) != local_80) {
        pppuVar3 = local_80;
        if (0xf < local_68) {
          pppuVar3 = (undefined8 ***)local_80[0];
        }
        FUN_180017ca0((undefined8 ***)(local_60[0] + 0x40),pppuVar3,local_70);
      }
      FUN_1800d4bdc(*(undefined8 *)(DAT_1804183c8 + (ulonglong)local_4c[0] * 8),local_80);
    }
  }
  FUN_180001ef2(local_80);
  return;
}

