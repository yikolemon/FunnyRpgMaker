/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400578f8 */

undefined8 * FUN_1400578f8(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = param_1 + 1;
  *param_1 = 0;
  param_1[1] = 0;
  local_38 = param_1;
  switch(*param_2) {
  case 0:
    FUN_140057552(local_58,0);
    FUN_14005783a(local_38,local_58);
    break;
  case 1:
    uVar2 = FUN_140071bde(param_2);
    FUN_140071822(local_38,uVar2);
    break;
  case 2:
    uVar2 = FUN_140071ed0(param_2);
    FUN_140071c80(local_38,uVar2);
    break;
  case 3:
    uVar2 = FUN_140071780(param_2);
    FUN_140063f00(local_40,*(undefined1 *)local_38);
    *(undefined1 *)local_38 = 3;
    uVar2 = FUN_14006b874(uVar2);
    *local_40 = uVar2;
    break;
  case 4:
    local_48 = local_48 & 0xffffffffffffff00;
    FUN_14007146e(&DAT_1401418dc);
    puVar1 = local_38;
    uVar3 = local_48 & 0xff;
    FUN_140063f00(local_40,*(undefined1 *)local_38);
    *(undefined1 *)puVar1 = 4;
    puVar1[1] = uVar3;
    break;
  case 5:
    local_48 = 0;
    FUN_1400715e8(param_2,&local_48);
    puVar1 = local_38;
    uVar3 = local_48;
    FUN_140063f00(local_40,*(undefined1 *)local_38);
    *(undefined1 *)puVar1 = 5;
    puVar1[1] = uVar3;
    break;
  case 6:
    local_48 = 0;
    FUN_1400716a5(param_2,&local_48);
    puVar1 = local_38;
    uVar3 = local_48;
    FUN_140063f00(local_40,*(undefined1 *)local_38);
    *(undefined1 *)puVar1 = 6;
    puVar1[1] = uVar3;
    break;
  case 7:
    local_48 = 0;
    FUN_14007150d(param_2,&local_48);
    puVar1 = local_38;
    uVar3 = local_48;
    FUN_140063f00(local_40,*(undefined1 *)local_38);
    *(undefined1 *)puVar1 = 7;
    puVar1[1] = uVar3;
    break;
  case 8:
    uVar2 = FUN_14007211e(param_2);
    FUN_140071f72(local_38,uVar2);
    break;
  case 9:
    *(undefined1 *)param_1 = 9;
  }
  return local_38;
}

