/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018db3 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_180018db3(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 local_1128 [4096];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  byte local_36;
  undefined1 local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_3 != (longlong *)0x0) {
    *(undefined1 *)(param_3 + 1) = 1;
    FUN_1800195aa(param_3 + 2,0,local_1128);
  }
  lVar1 = *param_4;
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_180018f12(local_128,param_1,param_2,param_4 + 1,lVar1,*(undefined4 *)(lVar1 + 0x28),
                  *(undefined4 *)(lVar1 + 0x20),param_5,local_1128);
    local_120 = local_58;
    local_34 = param_6;
    local_78 = 0;
    local_36 = 0;
    uVar2 = FUN_18001a248(local_128,local_68);
    bVar3 = (byte)uVar2 | local_36;
    uVar4 = CONCAT31((int3)((uint)uVar2 >> 8),bVar3);
    if ((param_3 != (longlong *)0x0) && ((bVar3 & 1) != 0)) {
      FUN_180019276(local_128,param_3);
      *param_3 = param_1;
      param_3[5] = param_1;
      *(bool *)(param_3 + 7) = param_1 != param_3[6];
    }
    FUN_1800193be(local_128);
  }
  return uVar4 & 0xffffff01;
}

