/* Copyleft (ɔ) meh. - http://meh.schizofreni.co
 *
 * This file is part of libtor - https://github.com/libtor/libtor
 *
 * libtor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published
 * by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * libtor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with libtor. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TOR_POLICY_H
#define TOR_POLICY_H

typedef enum TorPolicyRuleType {
	TOR_POLICY_RULE_ACCEPT,
	TOR_POLICY_RULE_REJECT
} TorPolicyRuleType;

typedef struct TorPolicyRule {
	TorPolicyRuleType type;

	char* address;

	uint16_t start;
	uint16_t end;

	struct TorPolicyRule* next;
} TorPolicyRule;

typedef struct TorPolicy {
	TorPolicyRule* rules;
} TorPolicy;

#endif