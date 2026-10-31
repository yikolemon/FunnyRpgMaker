/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015ace8 */

undefined8 FUN_18015ace8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  undefined1 local_90 [8];
  undefined8 **local_88 [2];
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_180403a00);
  lVar1 = FUN_1800dd766(&DAT_180419300,param_2);
  if (lVar1 == DAT_180419300) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 3;
    FUN_1800639cf(&local_48,*param_2,param_2[1] + *param_2,&local_68);
    FUN_180062860(&DAT_1804192d0,local_88,&local_68);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0xf;
    pppuVar2 = local_88;
    if (3 < local_70) {
      pppuVar2 = (undefined8 ***)local_88[0];
    }
    FUN_18006665b(local_90,pppuVar2,(longlong)pppuVar2 + local_78 * 4,&local_48);
    FUN_180061ab8(local_88);
    FUN_180061ab8(&local_68);
    FUN_18016464c(&DAT_180419300,local_88,param_2,&local_48);
    FUN_180003216(param_1,local_88[0] + 8);
    FUN_180001ef2(&local_48);
  }
  else {
    FUN_180003216(param_1,lVar1 + 0x40);
  }
  FUN_18023d6e0(&DAT_180403a00);
  return param_1;
}

