/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10099ab4 */

undefined4 __thiscall FUN_10099ab4(int param_1,undefined4 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (200 < iVar1) {
    if (iVar1 < 0xfa) {
      if (iVar1 < 0xe6) {
        switch(iVar1) {
        case 0xc9:
          pwVar2 = L"Move";
          break;
        case 0xca:
          pwVar2 = L"WaitForMove";
          break;
        default:
          goto switchD_10099ad0_caseD_64;
        case 0xd2:
          pwVar2 = L"CommonEvent";
          break;
        case 0xd3:
          pwVar2 = L"CommonEventReserve";
          break;
        case 0xd4:
          pwVar2 = L"SetLabel";
          break;
        case 0xd5:
          pwVar2 = L"JumpLabel";
          break;
        case 0xdc:
          pwVar2 = L"SaveLoad";
          break;
        case 0xdd:
          pwVar2 = L"LoadGame";
          break;
        case 0xde:
          pwVar2 = L"SaveGame";
        }
        goto LAB_10099e0d;
      }
      if (iVar1 < 0xf0) {
        if (iVar1 == 0xe6) {
          pwVar2 = L"MoveDuringEventOn";
          goto LAB_10099e0d;
        }
        if (iVar1 == 0xe7) {
          pwVar2 = L"MoveDuringEventOff";
          goto LAB_10099e0d;
        }
      }
      else {
        if (iVar1 == 0xf0) {
          pwVar2 = L"Chip";
          goto LAB_10099e0d;
        }
        if (iVar1 == 0xf1) {
          pwVar2 = L"ChipSet";
          goto LAB_10099e0d;
        }
      }
    }
    else if (iVar1 < 300) {
      if (iVar1 < 0x118) {
        if (iVar1 == 0xfa) {
          pwVar2 = L"Database";
          goto LAB_10099e0d;
        }
        if (iVar1 == 0xfb) {
          pwVar2 = L"ImportDatabase";
          goto LAB_10099e0d;
        }
        if (iVar1 == 0x10e) {
          pwVar2 = L"Party";
          goto LAB_10099e0d;
        }
      }
      else {
        if (iVar1 == 0x118) {
          pwVar2 = L"MapEffect";
          goto LAB_10099e0d;
        }
        if (iVar1 == 0x119) {
          pwVar2 = L"ScrollScreen";
          goto LAB_10099e0d;
        }
        if (iVar1 == 0x122) {
          pwVar2 = L"Effect";
          goto LAB_10099e0d;
        }
      }
    }
    else if (iVar1 < 0x1a4) {
      if (iVar1 == 300) {
        pwVar2 = L"CommonEventByName";
        goto LAB_10099e0d;
      }
      if (iVar1 == 0x191) {
        pwVar2 = L"ChoiceCase";
        goto LAB_10099e0d;
      }
      if (iVar1 == 0x192) {
        pwVar2 = L"SpecialChoiceCase";
        goto LAB_10099e0d;
      }
    }
    else if (iVar1 < 0x1f2) {
      if (iVar1 == 0x1a4) {
        pwVar2 = L"ElseCase";
        goto LAB_10099e0d;
      }
      if (iVar1 == 0x1a5) {
        pwVar2 = L"CancelCase";
        goto LAB_10099e0d;
      }
    }
    else {
      if (iVar1 == 0x1f2) {
        pwVar2 = L"LoopEnd";
        goto LAB_10099e0d;
      }
      if (iVar1 == 499) {
        pwVar2 = L"BranchEnd";
        goto LAB_10099e0d;
      }
    }
    goto switchD_10099ad0_caseD_64;
  }
  switch(iVar1) {
  case 99:
    pwVar2 = L"Checkpoint";
    break;
  case 0x65:
    pwVar2 = L"Message";
    break;
  case 0x66:
    pwVar2 = L"Choices";
    break;
  case 0x67:
    pwVar2 = L"Comment";
    break;
  case 0x69:
    pwVar2 = L"ForceStopMessage";
    break;
  case 0x6a:
    pwVar2 = L"DebugMessage";
    break;
  case 0x6b:
    pwVar2 = L"ClearDebugText";
    break;
  case 0x6f:
    pwVar2 = L"VariableCondition";
    break;
  case 0x70:
    pwVar2 = L"StringCondition";
    break;
  case 0x79:
    pwVar2 = L"SetVariable";
    break;
  case 0x7a:
    pwVar2 = L"SetString";
    break;
  case 0x7b:
    pwVar2 = L"InputKey";
    break;
  case 0x7c:
    pwVar2 = L"SetVariableEx";
    break;
  case 0x7d:
    pwVar2 = L"AutoInput";
    break;
  case 0x7e:
    pwVar2 = L"BanInput";
    break;
  case 0x82:
    pwVar2 = L"Teleport";
    break;
  case 0x8c:
    pwVar2 = L"Sound";
    break;
  case 0x96:
    pwVar2 = L"Picture";
    break;
  case 0x97:
    pwVar2 = L"ChangeColor";
    break;
  case 0xa0:
    pwVar2 = L"SetTransition";
    break;
  case 0xa1:
    pwVar2 = L"PrepareTransition";
    break;
  case 0xa2:
    pwVar2 = L"ExecuteTransition";
    break;
  case 0xaa:
  case 0xb0:
    pwVar2 = L"StartLoop";
    break;
  case 0xab:
    pwVar2 = L"BreakLoop";
    break;
  case 0xac:
    pwVar2 = L"BreakEvent";
    break;
  case 0xad:
    pwVar2 = L"EraseEvent";
    break;
  case 0xae:
    pwVar2 = L"ReturnToTitle";
    break;
  case 0xaf:
    pwVar2 = L"EndGame";
    break;
  case 0xb1:
    pwVar2 = L"StopNonPic";
    break;
  case 0xb2:
    pwVar2 = L"ResumeNonPic";
    break;
  case 0xb3:
    pwVar2 = L"LoopTimes";
    break;
  case 0xb4:
    pwVar2 = L"Wait";
    break;
  default:
    pwVar2 = L"Blank";
    if (iVar1 == 0) break;
  case 100:
  case 0x68:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
switchD_10099ad0_caseD_64:
    pwVar2 = L"Command";
  }
LAB_10099e0d:
  FUN_100012b0(pwVar2);
  return param_2;
}

