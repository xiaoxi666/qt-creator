/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#ifndef DEBUGGERICONS_H
#define DEBUGGERICONS_H

#include <utils/icon.h>

namespace Debugger {
namespace Icons {

const Utils::Icon BREAKPOINT(
        QLatin1String(":/debugger/images/breakpoint_16.png"));
const Utils::Icon BREAKPOINT_DISABLED(
        QLatin1String(":/debugger/images/breakpoint_disabled_16.png"));
const Utils::Icon BREAKPOINT_PENDING(
        QLatin1String(":/debugger/images/breakpoint_pending_16.png"));
const Utils::Icon BREAKPOINTS(
        QLatin1String(":/debugger/images/debugger_breakpoints.png"));
const Utils::Icon WATCHPOINT(
        QLatin1String(":/debugger/images/watchpoint.png"));
const Utils::Icon TRACEPOINT(
        QLatin1String(":/debugger/images/tracepoint.png"));
const Utils::Icon CONTINUE(
        QLatin1String(":/debugger/images/debugger_continue.png"));
const Utils::Icon CONTINUE_FLAT({
        {QLatin1String(":/debugger/images/debugger_continue_1_mask.png"), Utils::Theme::IconsInterruptColor},
        {QLatin1String(":/debugger/images/debugger_continue_2_mask.png"), Utils::Theme::IconsRunColor},
        {QLatin1String(":/projectexplorer/images/debugger_beetle_mask.png"), Utils::Theme::IconsDebugColor}});
const Utils::Icon DEBUG_CONTINUE_SMALL({
        {QLatin1String(":/projectexplorer/images/continue_1_small.png"), Utils::Theme::IconsInterruptColor},
        {QLatin1String(":/projectexplorer/images/continue_2_small.png"), Utils::Theme::IconsRunColor},
        {QLatin1String(":/projectexplorer/images/debugger_overlay_small.png"), Utils::Theme::IconsDebugColor}});
const Utils::Icon INTERRUPT(
        QLatin1String(":/debugger/images/debugger_interrupt.png"));
const Utils::Icon INTERRUPT_FLAT({
        {QLatin1String(":/debugger/images/debugger_interrupt_mask.png"), Utils::Theme::IconsInterruptColor},
        {QLatin1String(":/projectexplorer/images/debugger_beetle_mask.png"), Utils::Theme::IconsDebugColor}});
const Utils::Icon DEBUG_INTERRUPT_SMALL({
        {QLatin1String(":/projectexplorer/images/interrupt_small.png"), Utils::Theme::IconsInterruptColor},
        {QLatin1String(":/projectexplorer/images/debugger_overlay_small.png"), Utils::Theme::IconsDebugColor}});
const Utils::Icon DEBUG_EXIT_SMALL({
        {QLatin1String(":/projectexplorer/images/stop_small.png"), Utils::Theme::IconsStopColor},
        {QLatin1String(":/projectexplorer/images/debugger_overlay_small.png"), Utils::Theme::IconsDebugColor}});
const Utils::Icon LOCATION(
        QLatin1String(":/debugger/images/location_16.png"));
const Utils::Icon SNAPSHOT(
        QLatin1String(":/debugger/images/debugger_snapshot_small.png"));
const Utils::Icon REVERSE_MODE(
        QLatin1String(":/debugger/images/debugger_reversemode_16.png"));
const Utils::Icon APPLY_ON_SAVE(
        QLatin1String(":/debugger/images/qml/apply-on-save.png"));
const Utils::Icon APP_ON_TOP(
        QLatin1String(":/debugger/images/qml/app-on-top.png"));
const Utils::Icon SELECT(
        QLatin1String(":/debugger/images/qml/select.png"));
const Utils::Icon EMPTY(
        QLatin1String(":/debugger/images/debugger_empty_14.png"));
const Utils::Icon RECORD_ON({
        {QLatin1String(":/debugger/images/recordfill.png"), Utils::Theme::IconsStopColor},
        {QLatin1String(":/debugger/images/recordoutline.png"), Utils::Theme::IconsBaseColor}}, Utils::Icon::Tint | Utils::Icon::DropShadow);
const Utils::Icon RECORD_OFF({
        {QLatin1String(":/debugger/images/recordfill.png"), Utils::Theme::IconsDisabledColor},
        {QLatin1String(":/debugger/images/recordoutline.png"), Utils::Theme::IconsBaseColor}}, Utils::Icon::Tint | Utils::Icon::DropShadow);

const Utils::Icon STEP_OVER({
        {QLatin1String(":/debugger/images/debugger_stepover_small.png"), Utils::Theme::IconsBaseColor}});
const Utils::Icon STEP_OVER_TOOLBUTTON({
        {QLatin1String(":/debugger/images/debugger_stepover_small.png"), Utils::Theme::TextColorNormal}}, Utils::Icon::Tint);
const Utils::Icon STEP_INTO({
        {QLatin1String(":/debugger/images/debugger_stepinto_small.png"), Utils::Theme::IconsBaseColor}});
const Utils::Icon STEP_OUT({
        {QLatin1String(":/debugger/images/debugger_stepout_small.png"), Utils::Theme::IconsBaseColor}});
const Utils::Icon RESTART({
        {QLatin1String(":/debugger/images/debugger_restart_small.png"), Utils::Theme::IconsRunColor}});
const Utils::Icon SINGLE_INSTRUCTION_MODE({
        {QLatin1String(":/debugger/images/debugger_singleinstructionmode.png"), Utils::Theme::IconsBaseColor}});

const Utils::Icon MODE_DEBUGGER_CLASSIC(
        QLatin1String(":/debugger/images/mode_debug.png"));
const Utils::Icon MODE_DEBUGGER_FLAT({
        {QLatin1String(":/debugger/images/mode_debug_mask.png"), Utils::Theme::IconsBaseColor}});
const Utils::Icon MODE_DEBUGGER_FLAT_ACTIVE({
        {QLatin1String(":/debugger/images/mode_debug_mask.png"), Utils::Theme::IconsModeDebugActiveColor}});

} // namespace Icons
} // namespace Debugger

#endif // DEBUGGERICONS_H
